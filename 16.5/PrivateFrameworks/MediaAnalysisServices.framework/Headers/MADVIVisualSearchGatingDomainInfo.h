// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MADVIVISUALSEARCHGATINGDOMAININFO_H
#define MADVIVISUALSEARCHGATINGDOMAININFO_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MADVIVisualSearchGatingDomainInfo : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *displayLabel; // ivar: _displayLabel
@property (readonly, nonatomic) NSString *displayMessage; // ivar: _displayMessage
@property (readonly, nonatomic) NSString *domain; // ivar: _domain
@property (readonly, nonatomic) CGPoint focalPoint; // ivar: _focalPoint
@property (readonly, nonatomic) NSString *glyphName; // ivar: _glyphName
@property (readonly, nonatomic) BOOL hasFocalPoint; // ivar: _hasFocalPoint
@property (readonly, nonatomic) NSString *label; // ivar: _label


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDomain:(id)arg0 label:(id)arg1 glyphName:(id)arg2 hasFocalPoint:(BOOL)arg3 focalPoint:(struct CGPoint )arg4 displayLabel:(id)arg5 displayMessage:(id)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif