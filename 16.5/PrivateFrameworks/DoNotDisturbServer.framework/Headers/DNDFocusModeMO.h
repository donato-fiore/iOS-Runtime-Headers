// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DNDFOCUSMODEMO_H
#define DNDFOCUSMODEMO_H

@class NSManagedObject, NSString, NSSet;



@interface DNDFocusModeMO : NSManagedObject

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSSet *settings;


+(id)fetchRequest;


@end


#endif