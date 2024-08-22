// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SWDATASTORESETUPSCRIPT_H
#define SWDATASTORESETUPSCRIPT_H

@class NSString, WKUserScript;
@protocol SWScript;

#import <Foundation/Foundation.h>

#import "SWDatastore.h"

@interface SWDatastoreSetupScript : NSObject <SWScript>



@property (readonly, nonatomic) SWDatastore *datastore; // ivar: _datastore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *executableScript;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL queueable;
@property (readonly) Class superclass;
@property (readonly, nonatomic) WKUserScript *userScript;


+(id)source;
-(id)initWithDatastore:(id)arg0 ;


@end


#endif