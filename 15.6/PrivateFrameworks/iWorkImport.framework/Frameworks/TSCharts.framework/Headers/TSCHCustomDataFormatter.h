// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCHCUSTOMDATAFORMATTER_H
#define TSCHCUSTOMDATAFORMATTER_H

@class NSUUID, TSUCustomFormat, NSString;
@protocol TSCHDataFormatter, TSCHDataFormatterPersistableStyleObject;

#import <Foundation/Foundation.h>


@interface TSCHCustomDataFormatter : NSObject <TSCHDataFormatter, TSCHDataFormatterPersistableStyleObject>

 {
    NSUUID *_customFormatListKey;
    unsigned int _formatType;
}


@property (readonly, nonatomic) TSUCustomFormat *customFormat; // ivar: _customFormat
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger numberOfDecimalPlaces;
@property (readonly) Class superclass;


+(id)dataFormatterWithCustomFormat:(id)arg0 customFormatListKey:(id)arg1 formatType:(unsigned int)arg2 ;
-(BOOL)isCompatibleWithDataFormatter:(id)arg0 ;
-(id)chartFormattedInspectorStringForValue:(id)arg0 locale:(id)arg1 ;
-(id)chartFormattedStringForValue:(id)arg0 locale:(id)arg1 ;
-(id)convertToPersistableStyleObject;
-(id)convertToSupportedClientFormatObjectWithLocale:(id)arg0 ;
-(id)initWithCustomFormat:(id)arg0 customFormatListKey:(id)arg1 formatType:(unsigned int)arg2 ;
-(id)p_stringForValue:(id)arg0 locale:(id)arg1 ;
-(unsigned int)formatType;


@end


#endif