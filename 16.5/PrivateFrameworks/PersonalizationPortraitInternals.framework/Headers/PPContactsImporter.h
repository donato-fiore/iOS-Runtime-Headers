// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPCONTACTSIMPORTER_H
#define PPCONTACTSIMPORTER_H

@class NSString;
@protocol CNChangeHistoryEventVisitor;

#import <Foundation/Foundation.h>

#import "PPSQLDatabase.h"
#import "PPLocalContactStore.h"
#import "PPLocalNamedEntityStore.h"

@interface PPContactsImporter : NSObject <CNChangeHistoryEventVisitor>

 {
    PPSQLDatabase *_db;
    PPLocalContactStore *_contactStore;
    PPLocalNamedEntityStore *_namedEntityStore;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)defaultInstance;
-(id)init;
-(id)initWithDatabase:(id)arg0 ;
-(void)importContactsDataWithShouldContinueBlock:(id)arg0 ;
-(void)visitAddContactEvent:(id)arg0 ;
-(void)visitDeleteContactEvent:(id)arg0 ;
-(void)visitDropEverythingEvent:(id)arg0 ;
-(void)visitUpdateContactEvent:(id)arg0 ;


@end


#endif