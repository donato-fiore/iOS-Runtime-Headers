// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSDATADETECTOR_H
#define NSDATADETECTOR_H



#import "NSRegularExpression.h"

@interface NSDataDetector : NSRegularExpression {
    NSUInteger _types;
}


@property (readonly) NSUInteger checkingTypes;


+(BOOL)supportsSecureCoding;
+(id)dataDetectorWithTypes:(NSUInteger)arg0 error:(*id)arg1 ;
+(void)initialize;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)numberOfCaptureGroups;
-(NSUInteger)options;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPattern:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)initWithTypes:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)pattern;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateMatchesInString:(id)arg0 options:(NSUInteger)arg1 range:(struct _NSRange )arg2 usingBlock:(id)arg3 ;


@end


#endif