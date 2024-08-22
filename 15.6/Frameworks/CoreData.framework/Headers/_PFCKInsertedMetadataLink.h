// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PFCKINSERTEDMETADATALINK_H
#define _PFCKINSERTEDMETADATALINK_H


#import <Foundation/Foundation.h>

#import "NSCKRecordMetadata.h"
#import "NSManagedObject.h"

@interface _PFCKInsertedMetadataLink : NSObject {
    NSCKRecordMetadata *_recordMetadata;
    NSManagedObject *_insertedObject;
}




-(id)description;
-(void)dealloc;


@end


#endif