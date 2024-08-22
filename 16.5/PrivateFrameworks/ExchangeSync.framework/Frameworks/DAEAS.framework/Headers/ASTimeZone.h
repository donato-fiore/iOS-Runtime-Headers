// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASTIMEZONE_H
#define ASTIMEZONE_H

@class NSTimeZone;
@protocol ASParsingLeafNode;



@interface ASTimeZone : NSTimeZone <ASParsingLeafNode>

 {
    int _gmtOffset;
    int _dstOffset;
    *_SYSTEMTIME _standardDate;
    *_SYSTEMTIME _daylightDate;
    NSTimeZone *_wrappedTimeZone;
}




+(BOOL)_dateIsValidTransitionDate:(id)arg0 inYear:(int)arg1 withTimeZone:(id)arg2 ;
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)expectsContent;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(id)_curTZDataVersion;
+(id)_tzCachePathCreateIfMissing:(BOOL)arg0 ;
+(id)gmt;
+(void)_cacheTimeZoneInfo;
+(void)_fillOutCurrentTimeZoneInfo;
-(BOOL)_dateIsValidTransitionDate:(id)arg0 inYear:(NSInteger)arg1 outDaylightBias:(*NSInteger)arg2 ;
-(BOOL)isDaylightSavingTimeForDate:(id)arg0 ;
-(CGFloat)daylightSavingTimeOffsetForDate:(id)arg0 ;
-(NSInteger)secondsFromGMTForDate:(id)arg0 ;
-(id)_bestGuessAtOlsonTimeZoneForOffsetInMinutes:(int)arg0 daylightBiasInMinutes:(int)arg1 standardTransitionDate:(struct _SYSTEMTIME *)arg2 daylightTransitionDate:(struct _SYSTEMTIME *)arg3 ;
-(id)abbreviationForDate:(id)arg0 ;
-(id)data;
-(id)dateForRule:(struct _SYSTEMTIME *)arg0 inYear:(NSInteger)arg1 ;
-(id)description;
-(id)dictForCoding;
-(id)initWithASParseContext:(id)arg0 root:(id)arg1 parent:(id)arg2 callbackDict:(id)arg3 streamCallbackDict:(id)arg4 lengthUntilEndOfTerminator:(int)arg5 ;
-(id)initWithCodingDict:(id)arg0 ;
-(id)initWithName:(id)arg0 ;
-(id)initWithName:(id)arg0 data:(id)arg1 ;
-(id)initWithTZNameFromCalDB:(id)arg0 ;
-(id)name;
-(id)nextDaylightSavingTimeTransitionAfterDate:(id)arg0 ;
-(int)parsingState;
-(struct ? *)mallocTZIForDate:(id)arg0 ;
-(struct _SYSTEMTIME )_ruleForDate:(id)arg0 ;
-(void)dealloc;


@end


#endif