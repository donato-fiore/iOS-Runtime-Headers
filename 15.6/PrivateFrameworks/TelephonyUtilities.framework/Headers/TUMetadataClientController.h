// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TUMETADATACLIENTCONTROLLER_H
#define TUMETADATACLIENTCONTROLLER_H


#import <Foundation/Foundation.h>

#import "TUMetadataCache.h"

@interface TUMetadataClientController : NSObject

@property (retain, nonatomic) TUMetadataCache *metadataCache; // ivar: _metadataCache


+(id)sharedInstance;
-(id)_metadataDestinationIdForSearchItem:(id)arg0 ;
-(id)directoryLabelForDestinationID:(id)arg0 ;
-(id)directoryLabelForSearchItem:(id)arg0 ;
-(id)init;
-(id)locationForDestinationID:(id)arg0 ;
-(id)locationForSearchItem:(id)arg0 ;
-(id)suggestionForDestinationID:(id)arg0 ;
-(id)suggestionForSearchItem:(id)arg0 ;
-(void)updateMetadataForCall:(id)arg0 ;
-(void)updateMetadataForDestinationID:(id)arg0 ;
-(void)updateMetadataForRecentCalls:(id)arg0 ;


@end


#endif