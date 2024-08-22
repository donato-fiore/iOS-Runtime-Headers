// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ODCURARECANDIDATEMODEL_H
#define ODCURARECANDIDATEMODEL_H

@class BMStoreStream, NSString, MLModelConfiguration, NSURL;
@protocol _DKKnowledgeQuerying;

#import <Foundation/Foundation.h>


@interface ODCurareCandidateModel : NSObject

@property (retain, nonatomic) BMStoreStream *BMModelDataStream; // ivar: _BMModelDataStream
@property (retain, nonatomic) NSString *BMModelDataStreamIdentifier; // ivar: _BMModelDataStreamIdentifier
@property (retain, nonatomic) NSObject<_DKKnowledgeQuerying> *CDModelDataStream; // ivar: _CDModelDataStream
@property (retain, nonatomic) NSString *CDModelDataStreamIdentifier; // ivar: _CDModelDataStreamIdentifier
@property (retain, nonatomic) id *CDQuery; // ivar: _CDQuery
@property (copy, nonatomic) id *bmReceiveInputBlock; // ivar: _bmReceiveInputBlock
@property (nonatomic) BOOL isDefaultModel; // ivar: _isDefaultModel
@property (nonatomic) BOOL isPersonalizableModel; // ivar: _isPersonalizableModel
@property (retain, nonatomic) MLModelConfiguration *modelConfiguration; // ivar: _modelConfiguration
@property (retain, nonatomic) NSString *modelTag; // ivar: _modelTag
@property (retain, nonatomic) NSURL *modelURL; // ivar: _modelURL


-(BOOL)hasStreamFilter;
-(id)description;
-(id)getDatesOfEventsForStream;
-(id)initWithModelURL:(id)arg0 withBiomeStream:(id)arg1 andMetadata:(id)arg2 ;
-(id)initWithModelURL:(id)arg0 withBiomeStream:(id)arg1 withBiomeStreamIdentifier:(id)arg2 withModelTag:(id)arg3 andMetadata:(id)arg4 ;
-(id)initWithModelURL:(id)arg0 withBiomeStreamIdentifier:(id)arg1 andMetadata:(id)arg2 ;
-(id)initWithModelURL:(id)arg0 withCoreDuetStream:(id)arg1 withCoreDuetStreamIdentifier:(id)arg2 andMetadata:(id)arg3 ;
-(id)initWithModelURL:(id)arg0 withCoreDuetStream:(id)arg1 withCoreDuetStreamIdentifier:(id)arg2 withModelTag:(id)arg3 andMetadata:(id)arg4 ;
-(id)initWithModelURL:(id)arg0 withCoreDuetStreamIdentifier:(id)arg1 andMetadata:(id)arg2 ;
-(void)_setBiomeFilter:(id)arg0 fromInclusive:(id)arg1 toDate:(id)arg2 toInclusive:(id)arg3 ;
-(void)_setCoreDuetQuery:(id)arg0 fromInclusive:(id)arg1 toDate:(id)arg2 toInclusive:(id)arg3 ;
-(void)setStreamFilter:(id)arg0 fromInclusive:(id)arg1 toDate:(id)arg2 toInclusive:(id)arg3 ;


@end


#endif