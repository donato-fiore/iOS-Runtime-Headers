// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NSQUERYGENERATIONTOKEN_H
#define _NSQUERYGENERATIONTOKEN_H

@class NSString;


#import "NSQueryGenerationToken.h"
#import "_PFWeakReference.h"

@interface _NSQueryGenerationToken : NSQueryGenerationToken {
    NSString *_storeIdentifier;
    _PFWeakReference *_store;
    id *_generationIdentifier;
    _queryGenerationFlags _flags;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)autorelease;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)persistentStoreCoordinator;
-(id)retain;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)release;


@end


#endif