// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CORETHEMECONSTANTHELPER_H
#define CORETHEMECONSTANTHELPER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CoreThemeConstantHelper : NSObject {
    NSUInteger _identifier;
    NSString *_label;
    NSString *_displayName;
}




+(id)helperForStructAtIndex:(NSInteger)arg0 inAssociatedGlobalList:(*void)arg1 ;
-(NSInteger)identifier;
-(id)description;
-(id)displayName;
-(id)label;
-(void)dealloc;


@end


#endif