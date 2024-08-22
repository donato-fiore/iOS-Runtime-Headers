// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKTEXTFIELDTABLEVIEWSETTINGSROWFORMATTER_H
#define PKTEXTFIELDTABLEVIEWSETTINGSROWFORMATTER_H

@class NSSet;

#import <Foundation/Foundation.h>


@interface PKTextFieldTableViewSettingsRowFormatter : NSObject

@property (copy, nonatomic) NSSet *formatPaddingCharacters; // ivar: _formatPaddingCharacters


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)formattedValueFromInput:(id)arg0 ;
-(id)submissionValueFromFormattedInput:(id)arg0 ;


@end


#endif