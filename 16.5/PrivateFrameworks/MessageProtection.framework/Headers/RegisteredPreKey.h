// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REGISTEREDPREKEY_H
#define REGISTEREDPREKEY_H

@class NSManagedObject, NSSet, NSString;



@interface RegisteredPreKey : NSManagedObject

@property (retain, nonatomic) NSSet *senders;
@property (copy, nonatomic) NSString *tag;


+(id)fetchRequest;


@end


#endif