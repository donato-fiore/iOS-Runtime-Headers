// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _LTTRANSLATIONSENSE_H
#define _LTTRANSLATIONSENSE_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _LTTranslationSense : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *definition; // ivar: _definition
@property (copy, nonatomic) NSArray *labels; // ivar: _labels
@property (nonatomic, getter=isPhrasebookMatch) BOOL phrasebookMatch; // ivar: _phrasebookMatch
@property (copy, nonatomic) NSString *senseID; // ivar: _senseID
@property (copy, nonatomic) NSString *sourceMatch; // ivar: _sourceMatch
@property (copy, nonatomic) NSString *targetMatch; // ivar: _targetMatch


+(BOOL)supportsSecureCoding;
+(id)senseFromDictionary:(id)arg0 ;
+(id)senseWithPhrasebookMatchMeta:(id)arg0 ;
+(id)sensesFromArray:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)jsonRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif