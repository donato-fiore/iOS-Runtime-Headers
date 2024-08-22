// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGFEATUREEXTRACTIONSOURCEMESSAGES_H
#define PGFEATUREEXTRACTIONSOURCEMESSAGES_H

@class NSString;
@protocol PGFeatureExtractionSource;

#import <Foundation/Foundation.h>


@interface PGFeatureExtractionSourceMessages : NSObject <PGFeatureExtractionSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)extractSharingRecordsFromGraph:(id)arg0 photoLibrary:(id)arg1 loggingConnection:(id)arg2 progressBlock:(id)arg3 ;


@end


#endif