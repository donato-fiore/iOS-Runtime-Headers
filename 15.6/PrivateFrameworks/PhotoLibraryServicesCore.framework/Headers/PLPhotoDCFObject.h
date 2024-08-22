// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLPHOTODCFOBJECT_H
#define PLPHOTODCFOBJECT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PLPhotoDCFObject : NSObject {
    NSString *_name;
    int _number;
}




+(id)validDCFNameForName:(id)arg0 requiredLength:(int)arg1 nameLength:(int)arg2 number:(*int)arg3 numberRange:(struct _NSRange )arg4 suffix:(id)arg5 ;
-(NSInteger)compare:(id)arg0 ;
-(id)description;
-(id)initWithName:(id)arg0 number:(int)arg1 ;
-(id)name;
-(int)number;
-(void)setWriteIsPending:(BOOL)arg0 ;


@end


#endif