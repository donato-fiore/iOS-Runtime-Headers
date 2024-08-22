// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIRECIPIENTMODEL_H
#define TIRECIPIENTMODEL_H

@class NSString, RKMessageResponseManager;
@protocol TILinguisticDataSourceMessage;

#import <Foundation/Foundation.h>


@interface TIRecipientModel : NSObject

@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSObject<TILinguisticDataSourceMessage> *lastMessage; // ivar: _lastMessage
@property (retain, nonatomic) RKMessageResponseManager *trainer; // ivar: _trainer


-(id)initWithCompositeName:(id)arg0 andTrainer:(id)arg1 ;
-(id)languageGuessForString:(id)arg0 ;
-(void)handleMessages:(id)arg0 ;


@end


#endif