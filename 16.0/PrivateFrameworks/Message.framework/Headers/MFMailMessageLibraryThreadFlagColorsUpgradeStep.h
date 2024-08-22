// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFMAILMESSAGELIBRARYTHREADFLAGCOLORSUPGRADESTEP_H
#define MFMAILMESSAGELIBRARYTHREADFLAGCOLORSUPGRADESTEP_H

@class NSString;
@protocol EDTableUpgradeStep;

#import <Foundation/Foundation.h>


@interface MFMailMessageLibraryThreadFlagColorsUpgradeStep : NSObject <EDTableUpgradeStep>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_threadsTableSchemaWithMessagesTable:(id)arg0 conversationsTable:(id)arg1 threadScopesTable:(id)arg2 ;
+(int)runWithConnection:(id)arg0 ;


@end


#endif