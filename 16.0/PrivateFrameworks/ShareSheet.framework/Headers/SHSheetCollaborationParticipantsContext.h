// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SHSHEETCOLLABORATIONPARTICIPANTSCONTEXT_H
#define SHSHEETCOLLABORATIONPARTICIPANTSCONTEXT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SHSheetCollaborationParticipantsContext : NSObject

@property (readonly, copy, nonatomic) NSString *confirmButtonText; // ivar: _confirmButtonText
@property (readonly, copy, nonatomic) NSString *headerTitle; // ivar: _headerTitle
@property (readonly, copy, nonatomic) NSString *loadingText; // ivar: _loadingText
@property (readonly, copy, nonatomic) NSString *supplementaryText; // ivar: _supplementaryText


+(id)defaultContext;
-(id)initWithHeaderTitle:(id)arg0 supplementaryText:(id)arg1 confirmButtonText:(id)arg2 loadingText:(id)arg3 ;


@end


#endif