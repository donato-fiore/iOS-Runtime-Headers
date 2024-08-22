// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PBPLACEHOLDER_H
#define PBPLACEHOLDER_H


#import <Foundation/Foundation.h>


@interface PBPlaceholder : NSObject



+(BOOL)isBodyPlaceholder:(int)arg0 ;
+(BOOL)isTitlePlaceholder:(int)arg0 ;
+(int)placeholderTypeFromTextType:(int)arg0 ;
+(int)readPlaceholderOrientation:(int)arg0 ;
+(int)readPlaceholderSize:(int)arg0 ;
+(int)readPlaceholderType:(int)arg0 ;
+(void)writePlaceholder:(id)arg0 toPlaceholderAtom:(struct PptOEPlaceholderAtom *)arg1 isMaster:(BOOL)arg2 isNotes:(BOOL)arg3 ;


@end


#endif