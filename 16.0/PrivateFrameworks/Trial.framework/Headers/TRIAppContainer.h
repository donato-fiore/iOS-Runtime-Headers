// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRIAPPCONTAINER_H
#define TRIAPPCONTAINER_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TRIAppContainer : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)containerWithIdentifier:(id)arg0 type:(NSInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToContainer:(id)arg0 ;
-(NSInteger)fetchStatus;
-(NSUInteger)hash;
-(id)_appBundleContainerDirectoryAsOwner;
-(id)_appBundleContainerDirectoryAsSystemWithError:(*id)arg0 ;
-(id)_appContainerDirectoryAsSystemWithContainerClass:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)_appDataContainerDirectoryAsOwner;
-(id)_appDataContainerDirectoryAsSystemWithError:(*id)arg0 ;
-(id)_containerError:(NSUInteger)arg0 withFormat:(id)arg1 ;
-(id)_containerURLWithError:(*id)arg0 ;
-(id)_groupContainerDirectoryAsOwner;
-(id)_groupContainerDirectoryAsSystemWithError:(*id)arg0 ;
-(id)containerURL;
-(id)containerURLAsOwner;
-(id)copyWithReplacementIdentifier:(id)arg0 ;
-(id)copyWithReplacementType:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 type:(NSInteger)arg1 ;
-(id)sanitizedIdentifier;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif