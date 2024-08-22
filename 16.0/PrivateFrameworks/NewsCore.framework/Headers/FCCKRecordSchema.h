// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCCKRECORDSCHEMA_H
#define FCCKRECORDSCHEMA_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface FCCKRecordSchema : NSObject {
    NSDictionary *_fieldSchemasByName;
    NSString *_clientRecordType;
    NSString *_serverRecordType;
}




-(id)init;


@end


#endif