// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXMODEFACECOMPLICATIONAPPDATASOURCE_H
#define ATXMODEFACECOMPLICATIONAPPDATASOURCE_H

@class NSString;
@protocol ATXModeFaceComplicationDataSource;

#import <Foundation/Foundation.h>


@interface ATXModeFaceComplicationAppDataSource : NSObject <ATXModeFaceComplicationDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)provideComplicationsForSuggestedFaceType:(NSInteger)arg0 environment:(id)arg1 ;


@end


#endif