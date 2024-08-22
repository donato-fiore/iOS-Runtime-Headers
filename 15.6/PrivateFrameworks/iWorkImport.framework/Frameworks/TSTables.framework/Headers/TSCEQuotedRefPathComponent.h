// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCEQUOTEDREFPATHCOMPONENT_H
#define TSCEQUOTEDREFPATHCOMPONENT_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface TSCEQuotedRefPathComponent : NSObject {
    NSMutableArray *_refPathWords;
}




-(NSUInteger)numWords;
-(id)description;
-(id)trimmedStringStartingAtWord:(NSUInteger)arg0 ;
-(id)trimmedStringStartingAtWord:(NSUInteger)arg0 withPreserveFlags:(BOOL)arg1 ;
-(id)wordAtIndex:(NSUInteger)arg0 ;
-(void)addRefPathWord:(id)arg0 ;
-(void)removeRefPathWordAtIndex:(NSUInteger)arg0 ;


@end


#endif