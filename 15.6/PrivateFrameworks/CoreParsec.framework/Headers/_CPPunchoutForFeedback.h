// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CPPUNCHOUTFORFEEDBACK_H
#define _CPPUNCHOUTFORFEEDBACK_H

@class PBCodable, NSString, NSData, NSArray;
@protocol _CPPunchoutForFeedback, NSSecureCoding;



@interface _CPPunchoutForFeedback : PBCodable <_CPPunchoutForFeedback, NSSecureCoding>



@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int knownBundleIdentifier; // ivar: _knownBundleIdentifier
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *urls; // ivar: _urls
@property (readonly, nonatomic) NSUInteger whichBundleid; // ivar: _whichBundleid


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)initWithFacade:(id)arg0 ;
-(id)urlsAtIndex:(NSUInteger)arg0 ;
-(void)addUrls:(id)arg0 ;
-(void)clearBundleid;
-(void)clearUrls;
-(void)writeTo:(id)arg0 ;


@end


#endif