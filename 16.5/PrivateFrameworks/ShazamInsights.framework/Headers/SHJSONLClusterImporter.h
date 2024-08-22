// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHJSONLCLUSTERIMPORTER_H
#define SHJSONLCLUSTERIMPORTER_H

@class NSString;
@protocol SHClusterImporter;

#import <Foundation/Foundation.h>


@interface SHJSONLClusterImporter : NSObject <SHClusterImporter>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)createTables:(struct sqlite3 *)arg0 error:(*id)arg1 ;
-(BOOL)insert:(struct sqlite3 *)arg0 appleMusicID:(id)arg1 cohesionID:(NSInteger)arg2 ;
-(BOOL)loadDataFromFileInfo:(id)arg0 withMetadata:(id)arg1 toDestinationURL:(id)arg2 error:(*id)arg3 ;
-(NSInteger)insert:(struct sqlite3 *)arg0 low:(int)arg1 medium:(int)arg2 high:(int)arg3 ;


@end


#endif