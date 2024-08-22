// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASFOLDERITEMSSYNCRESPONSE_H
#define ASFOLDERITEMSSYNCRESPONSE_H

@class NSMutableArray, NSNumber;


#import "ASItem.h"
#import "ASCollection.h"

@interface ASFolderItemsSyncResponse : ASItem

@property (retain, nonatomic) ASCollection *collection; // ivar: _collection
@property (nonatomic) NSInteger dataclass; // ivar: _dataclass
@property (retain, nonatomic) NSMutableArray *deliveryIdsToClear; // ivar: _deliveryIdsToClear
@property (retain, nonatomic) NSMutableArray *deliveryIdsToSoftClear; // ivar: _deliveryIdsToSoftClear
@property (retain, nonatomic) NSMutableArray *meetingRequestDatas; // ivar: _meetingRequestDatas
@property (retain, nonatomic) NSNumber *status; // ivar: _status


+(BOOL)acceptsTopLevelLeaves;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(id)asParseRules;
-(id)description;
-(id)initWithDataclass:(NSInteger)arg0 ;
-(void)_processMeetingRequestDatasForAccount:(id)arg0 ;
-(void)addDeliveryIdToClear:(id)arg0 ;
-(void)addDeliveryIdToSoftClear:(id)arg0 ;
-(void)addMeetingRequestData:(id)arg0 ;
-(void)parseASParseContext:(id)arg0 root:(id)arg1 parent:(id)arg2 callbackDict:(id)arg3 streamCallbackDict:(id)arg4 account:(id)arg5 ;


@end


#endif