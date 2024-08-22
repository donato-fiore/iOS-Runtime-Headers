// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMBSQLFILE_H
#define HMBSQLFILE_H

@class HMFObject;



@interface HMBSQLFile : HMFObject



+(id)contexts;
+(id)open:(id)arg0 ;
+(id)open:(id)arg0 readOnly:(BOOL)arg1 error:(*id)arg2 initializer:(id)arg3 ;
+(id)open:(id)arg0 readOnly:(BOOL)arg1 using:(Class)arg2 error:(*id)arg3 ;
+(void)close:(id)arg0 ;
+(void)removeDatastoreAtURL:(id)arg0 ;


@end


#endif