// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC13SOFTPOSREADER9AUDIT_LOG_H
#define _TTC13SOFTPOSREADER9AUDIT_LOG_H

@class NSManagedObject, NSData;



@interface _TtC13SoftPosReader9Audit_log : NSManagedObject

@property (nonatomic, copy) NSData *storedKey;
@property (nonatomic, copy) NSData *storedValue;


-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif