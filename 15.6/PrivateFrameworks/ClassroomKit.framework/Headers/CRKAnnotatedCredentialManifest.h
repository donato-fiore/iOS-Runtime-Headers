// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKANNOTATEDCREDENTIALMANIFEST_H
#define CRKANNOTATEDCREDENTIALMANIFEST_H

@class NSMutableDictionary, NSDictionary, NSSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CRKAnnotatedCredentialManifest : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSMutableDictionary *annotationsByPersistentID; // ivar: _annotationsByPersistentID
@property (readonly, copy, nonatomic) NSDictionary *debugInfo;
@property (nonatomic) BOOL modified; // ivar: _modified
@property (readonly, copy, nonatomic) NSSet *persistentIDs;


+(BOOL)supportsSecureCoding;
+(id)manifestWithData:(id)arg0 ;
-(BOOL)isEmpty;
-(id)annotationForPersistentID:(id)arg0 ;
-(id)dataRepresentation;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)addPersistentID:(id)arg0 withAnnotation:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removePersistentID:(id)arg0 ;


@end


#endif