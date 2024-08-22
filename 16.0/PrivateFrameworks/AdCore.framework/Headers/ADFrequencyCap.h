// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ADFREQUENCYCAP_H
#define ADFREQUENCYCAP_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ADFrequencyCap : NSObject

@property (retain, nonatomic) NSString *adMetadata; // ivar: _adMetadata
@property (nonatomic) NSInteger downloadType; // ivar: _downloadType
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) CGFloat setTime; // ivar: _setTime


-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)splitCapData:(id)arg0 ;


@end


#endif