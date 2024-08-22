// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBHICONRELATIVEPATH_H
#define SBHICONRELATIVEPATH_H

@class NSString, NSArray;
@protocol BSDescriptionProviding, NSCopying, NSCoding;

#import <Foundation/Foundation.h>


@interface SBHIconRelativePath : NSObject <BSDescriptionProviding, NSCopying, NSCoding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *folderIdentifier; // ivar: _folderIdentifier
@property (readonly, nonatomic) NSUInteger gridCellInfoOptions; // ivar: _gridCellInfoOptions
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *listIdentifier; // ivar: _listIdentifier
@property (readonly, copy, nonatomic) NSArray *priorIconIdentifiers; // ivar: _priorIconIdentifiers
@property (readonly, copy, nonatomic) NSArray *subsequentIconIdentifiers; // ivar: _subsequentIconIdentifiers
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)iconRelativePathWithFolderIdentifier:(id)arg0 listIdentifier:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFolderIdentifier:(id)arg0 listIdentifier:(id)arg1 priorIconIdentifiers:(id)arg2 subsequentIconIdentifiers:(id)arg3 gridCellInfoOptions:(NSUInteger)arg4 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif