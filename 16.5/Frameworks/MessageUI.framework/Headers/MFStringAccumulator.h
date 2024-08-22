// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFSTRINGACCUMULATOR_H
#define MFSTRINGACCUMULATOR_H

@class NSMutableString, NSString;

#import <Foundation/Foundation.h>


@interface MFStringAccumulator : NSObject {
    NSMutableString *_mutable;
    NSString *_immutable;
}




-(id)string;
-(void)appendString:(id)arg0 ;


@end


#endif