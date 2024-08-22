// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMMICROLOCATIONPROBABILITYPERLABEL_H
#define BMMICROLOCATIONPROBABILITYPERLABEL_H

@class NSString, NSUUID;
@protocol BMStoreData, BMProtoBufWrapper;

#import <Foundation/Foundation.h>


@interface BMMicroLocationProbabilityPerLabel : NSObject <BMStoreData, BMProtoBufWrapper>



@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSUUID *labelIdentifier; // ivar: _labelIdentifier
@property (readonly, nonatomic) CGFloat probability; // ivar: _probability
@property (readonly) Class superclass;


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)encodeAsProto;
-(id)initWithLabelIdentifier:(id)arg0 probability:(CGFloat)arg1 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)proto;
-(id)serialize;


@end


#endif