// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSCARDMETADATAREGISTRATIONRESULT_H
#define AMSCARDMETADATAREGISTRATIONRESULT_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface AMSCardMetadataRegistrationResult : NSObject

@property (retain, nonatomic) NSString *cardArtwork; // ivar: _cardArtwork
@property (nonatomic) NSInteger cardType; // ivar: _cardType
@property (retain, nonatomic) NSString *descriptionLong; // ivar: _descriptionLong
@property (retain, nonatomic) NSString *descriptionShort; // ivar: _descriptionShort
@property (retain, nonatomic) NSDictionary *dictionary; // ivar: _dictionary
@property (nonatomic) NSInteger paymentNetwork; // ivar: _paymentNetwork
@property (retain, nonatomic) NSString *serialNumber; // ivar: _serialNumber
@property (retain, nonatomic) NSString *suffix; // ivar: _suffix


-(id)init;
-(id)initWithCardArtwork:(id)arg0 cardType:(NSInteger)arg1 descriptionLong:(id)arg2 descriptionShort:(id)arg3 paymentNetwork:(NSInteger)arg4 serialNumber:(id)arg5 suffix:(id)arg6 ;


@end


#endif