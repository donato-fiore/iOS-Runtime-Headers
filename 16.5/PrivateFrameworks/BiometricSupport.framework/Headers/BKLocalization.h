// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BKLOCALIZATION_H
#define BKLOCALIZATION_H


#import <Foundation/Foundation.h>


@interface BKLocalization : NSObject



+(BOOL)isiPad;
+(id)getLocalizedString:(id)arg0 ;
+(id)getLocalizedString:(id)arg0 fromFile:(id)arg1 ;
+(id)getLocalizedString:(id)arg0 fromStringTable:(id)arg1 withBundle:(id)arg2 defaultValue:(id)arg3 ;


@end


#endif