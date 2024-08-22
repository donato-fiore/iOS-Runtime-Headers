// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFSIRIWORDTIMINGINFO_H
#define SFSIRIWORDTIMINGINFO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SFSiriWordTimingInfo : NSObject

@property (copy, nonatomic) NSString *localizedText; // ivar: _localizedText
@property (nonatomic) _NSRange textRange; // ivar: _textRange
@property (nonatomic) CGFloat timeOffset; // ivar: _timeOffset
@property (copy, nonatomic) NSString *wordID; // ivar: _wordID


+(id)serializableArrayWithTimingInfoArray:(id)arg0 ;
+(id)timingInfoArrayWithSerializableArray:(id)arg0 ;
-(id)dictionary;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif