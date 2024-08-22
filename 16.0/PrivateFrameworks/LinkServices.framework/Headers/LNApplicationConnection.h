// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNAPPLICATIONCONNECTION_H
#define LNAPPLICATIONCONNECTION_H



#import "LNConnection.h"

@interface LNApplicationConnection : LNConnection



-(id)initWithBundleIdentifier:(id)arg0 ;
-(id)initWithBundleIdentifier:(id)arg0 metadataVersion:(NSInteger)arg1 error:(*id)arg2 ;
-(void)handleConnectionActionResponse:(id)arg0 ;


@end


#endif