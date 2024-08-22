// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DECLOCATIONAPPITEM_H
#define _DECLOCATIONAPPITEM_H

@class DECAppItem, NSURL, NSString;



@interface _DECLocationAppItem : DECAppItem

@property (readonly, nonatomic) BOOL directionsSupported; // ivar: _directionsSupported
@property (readonly, copy, nonatomic) NSURL *launchURL; // ivar: _launchURL
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) NSString *originatingBundleIdentifier; // ivar: _originatingBundleIdentifier
@property (readonly, copy, nonatomic) NSString *shortName; // ivar: _shortName


+(BOOL)supportsSecureCoding;
+(id)locationAppWithBundleIdentifier:(id)arg0 name:(id)arg1 shortName:(id)arg2 launchURL:(id)arg3 originatingBundleIdentifier:(id)arg4 directionsSupported:(BOOL)arg5 ;
+(id)locationAppWithBundleIdentifier:(id)arg0 name:(id)arg1 shortName:(id)arg2 launchURL:(id)arg3 originatingBundleIdentifier:(id)arg4 directionsSupported:(BOOL)arg5 predictionSources:(NSInteger)arg6 ;
-(BOOL)_isEqualToDECLocationAppItem:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEquivalent:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithBundleIdentifier:(id)arg0 name:(id)arg1 shortName:(id)arg2 launchURL:(id)arg3 originatingBundleIdentifier:(id)arg4 directionsSupported:(BOOL)arg5 predictionSources:(NSInteger)arg6 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif