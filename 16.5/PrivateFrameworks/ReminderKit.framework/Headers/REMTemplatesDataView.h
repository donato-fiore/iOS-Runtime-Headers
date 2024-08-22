// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REMTEMPLATESDATAVIEW_H
#define REMTEMPLATESDATAVIEW_H


#import <Foundation/Foundation.h>

#import "REMStore.h"

@interface REMTemplatesDataView : NSObject

@property (readonly, nonatomic) REMStore *store; // ivar: _store


-(id)fetchTemplateWithObjectID:(id)arg0 error:(*id)arg1 ;
-(id)fetchTemplatesInAccount:(id)arg0 error:(*id)arg1 ;
-(id)fetchTemplatesWithObjectIDs:(id)arg0 error:(*id)arg1 ;
-(id)initWithStore:(id)arg0 ;
-(id)templatesFromTemplateStorages:(id)arg0 store:(id)arg1 ;


@end


#endif