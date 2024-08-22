// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHSQLITECLUSTERIMPORTER_H
#define SHSQLITECLUSTERIMPORTER_H

@class NSString;
@protocol SHClusterImporter;

#import <Foundation/Foundation.h>


@interface SHSQLiteClusterImporter : NSObject <SHClusterImporter>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)loadDataFromFileInfo:(id)arg0 withMetadata:(id)arg1 toDestinationURL:(id)arg2 error:(*id)arg3 ;


@end


#endif