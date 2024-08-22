// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VNREQUESTSPECIFIER_H
#define VNREQUESTSPECIFIER_H

@class NSString, NSArray;
@protocol NSCopying, NSSecureCoding, VNRequestSpecifying;

#import <Foundation/Foundation.h>


@interface VNRequestSpecifier : NSObject <NSCopying, NSSecureCoding, VNRequestSpecifying>

 {
    unsigned int _requestClassCode;
    NSUInteger _requestRevision;
    NSString *_cachedRequestClassName;
    Class _cachedRequestClass;
}


@property (readonly, copy) NSArray *allModelEquivalents;
@property (readonly) BOOL observationProvidesBoundsNormalizedToROI;
@property (readonly) unsigned int requestClassCode;
@property (readonly, copy) NSString *requestClassName;
@property (readonly, nonatomic) NSUInteger requestRevision;


+(BOOL)supportsSecureCoding;
+(id)specifierForRequest:(id)arg0 ;
+(id)specifierForRequestClass:(Class)arg0 revision:(NSUInteger)arg1 error:(*id)arg2 ;
+(id)specifierForRequestClassCode:(*unsigned int)arg0 revision:(NSUInteger)arg1 error:(*id)arg2 ;
+(id)specifierForRequestClassName:(id)arg0 revision:(NSUInteger)arg1 error:(*id)arg2 ;
+(void)registerModelEquivalencyOf:(id)arg0 to:(id)arg1 ;
+(void)registerRequestClass:(Class)arg0 revision:(NSUInteger)arg1 modelEquivalencyToRevision:(NSUInteger)arg2 ;
+(void)registerRequestClassName:(id)arg0 revision:(NSUInteger)arg1 modelEquivalencyToRevision:(NSUInteger)arg2 ;
-(BOOL)hasModelEquivalencyToRequestSpecifier:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)specifiesAnyRequestClass:(Class)arg0 ;
-(BOOL)specifiesAnyRequestClassName:(id)arg0 ;
-(BOOL)specifiesRequestClass:(Class)arg0 ;
-(BOOL)specifiesRequestClass:(Class)arg0 revision:(NSUInteger)arg1 ;
-(BOOL)specifiesRequestClass:(Class)arg0 withAnyRevision:(NSUInteger)arg1 ;
-(BOOL)specifiesRequestClassName:(id)arg0 ;
-(BOOL)specifiesRequestClassName:(id)arg0 revision:(NSUInteger)arg1 ;
-(BOOL)specifiesRequestClassName:(id)arg0 withAnyRevision:(NSUInteger)arg1 ;
-(Class)requestClassAndReturnError:(*id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRequestClass:(Class)arg0 name:(id)arg1 code:(unsigned int)arg2 revision:(NSUInteger)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif