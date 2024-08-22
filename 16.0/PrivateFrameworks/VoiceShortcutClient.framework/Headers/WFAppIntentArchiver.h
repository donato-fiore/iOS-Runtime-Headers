// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFAPPINTENTARCHIVER_H
#define WFAPPINTENTARCHIVER_H

@class LNFullyQualifiedActionIdentifier, LNActionMetadata;

#import <Foundation/Foundation.h>


@interface WFAppIntentArchiver : NSObject

@property (readonly, copy, nonatomic) LNFullyQualifiedActionIdentifier *actionIdentifier; // ivar: _actionIdentifier
@property (copy, nonatomic) LNActionMetadata *actionMetadata; // ivar: _actionMetadata


-(id)archiveAction:(id)arg0 error:(*id)arg1 ;
-(id)initWithIdentifier:(id)arg0 actionMetadata:(id)arg1 ;
-(id)resolvedActionMetadataWithError:(*id)arg0 ;
-(id)unarchiveActionFromData:(id)arg0 error:(*id)arg1 ;
-(void)archiveAction:(id)arg0 completion:(id)arg1 ;
-(void)unarchiveActionFromData:(id)arg0 completion:(id)arg1 ;


@end


#endif