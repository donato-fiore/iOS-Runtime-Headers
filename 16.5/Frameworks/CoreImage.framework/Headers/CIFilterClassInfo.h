// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CIFILTERCLASSINFO_H
#define CIFILTERCLASSINFO_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface CIFilterClassInfo : NSObject {
    NSArray *inputKeys;
    NSArray *inputClasses;
    NSArray *outputKeys;
}




+(id)classInfoForClass:(Class)arg0 ;
-(id)description;
-(id)init;
-(id)initWithClass:(Class)arg0 ;
-(id)inputClasses;
-(id)inputKeys;
-(id)outputKeys;
-(void)dealloc;


@end


#endif