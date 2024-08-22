// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ECTRANSFERMESSAGEACTIONITEM_H
#define ECTRANSFERMESSAGEACTIONITEM_H

@class NSString;
@protocol ECTransferMessageActionItemBuilder, NSCopying, ECMessage;

#import <Foundation/Foundation.h>


@interface ECTransferMessageActionItem : NSObject <ECTransferMessageActionItemBuilder, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<ECMessage> *destinationMessage; // ivar: _destinationMessage
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<ECMessage> *sourceMessage; // ivar: _sourceMessage
@property (copy, nonatomic) NSString *sourceRemoteID; // ivar: _sourceRemoteID
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithBuilder:(id)arg0 ;


@end


#endif