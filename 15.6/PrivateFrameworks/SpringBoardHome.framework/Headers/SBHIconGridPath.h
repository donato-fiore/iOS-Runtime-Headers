// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBHICONGRIDPATH_H
#define SBHICONGRIDPATH_H

@class NSString;
@protocol BSDescriptionProviding, NSCopying, NSCoding;

#import <Foundation/Foundation.h>


@interface SBHIconGridPath : NSObject <BSDescriptionProviding, NSCopying, NSCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *folderIdentifier; // ivar: _folderIdentifier
@property (readonly, nonatomic) NSUInteger gridCellIndex; // ivar: _gridCellIndex
@property (readonly, nonatomic) NSUInteger gridCellInfoOptions; // ivar: _gridCellInfoOptions
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *listIdentifier; // ivar: _listIdentifier
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)iconGridPathWithGridCellIndex:(NSUInteger)arg0 ;
-(id)iconGridPathWithListIdentifier:(id)arg0 gridCellIndex:(NSUInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFolderIdentifier:(id)arg0 listIdentifier:(id)arg1 gridCellIndex:(NSUInteger)arg2 gridCellInfoOptions:(NSUInteger)arg3 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif