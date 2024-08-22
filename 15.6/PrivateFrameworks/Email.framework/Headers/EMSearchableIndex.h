// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EMSEARCHABLEINDEX_H
#define EMSEARCHABLEINDEX_H

@class NSString;
@protocol EFLoggable;

#import <Foundation/Foundation.h>

#import "EMRemoteConnection.h"

@interface EMSearchableIndex : NSObject <EFLoggable>



@property (retain) EMRemoteConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)attachmentPersistentIDFromItemIdentifier:(id)arg0 ;
+(id)log;
+(id)remoteInterface;
-(id)initWithRemoteConnection:(id)arg0 ;
-(void)reindexAllSearchableItemsWithAcknowledgementHandler:(id)arg0 ;
-(void)reindexSearchableItemsWithIdentifiers:(id)arg0 acknowledgementHandler:(id)arg1 ;


@end


#endif