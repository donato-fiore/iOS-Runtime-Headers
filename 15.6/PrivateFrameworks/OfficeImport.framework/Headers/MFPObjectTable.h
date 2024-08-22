// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFPOBJECTTABLE_H
#define MFPOBJECTTABLE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface MFPObjectTable : NSObject {
    NSMutableDictionary *mObjects;
}




-(id)init;
-(id)objectAtIndex:(int)arg0 ;
-(void)setObject:(id)arg0 atIndex:(int)arg1 ;


@end


#endif