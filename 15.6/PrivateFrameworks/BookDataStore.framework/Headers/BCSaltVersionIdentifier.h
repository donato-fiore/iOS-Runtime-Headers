// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BCSALTVERSIONIDENTIFIER_H
#define BCSALTVERSIONIDENTIFIER_H

@class NSManagedObject, NSString;



@interface BCSaltVersionIdentifier : NSManagedObject

@property (retain, nonatomic) NSString *localSaltVersionIdentifier;
@property (retain, nonatomic) NSString *serverSaltVersionIdentifier;


+(id)fetchRequest;
-(id)initIntoManagedObjectContext:(id)arg0 ;


@end


#endif