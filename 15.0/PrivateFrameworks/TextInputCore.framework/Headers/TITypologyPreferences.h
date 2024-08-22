// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TITYPOLOGYPREFERENCES_H
#define TITYPOLOGYPREFERENCES_H

@class NSURL;
@protocol TITypologyPreferences;

#import <Foundation/Foundation.h>


@interface TITypologyPreferences : NSObject <TITypologyPreferences>



@property (readonly, nonatomic) NSInteger maxBytesPersistedTypologyRecords;
@property (readonly, nonatomic) NSInteger maxBytesPersistedTypologyTraceLogs;
@property (readonly, nonatomic) CGFloat maxLifetimeInterval;
@property (readonly, nonatomic) NSUInteger persistenceStrategy;
@property (readonly, nonatomic) NSURL *typologyDirectoryURL;
@property (readonly, nonatomic) BOOL typologyLoggingEnabled;




@end


#endif