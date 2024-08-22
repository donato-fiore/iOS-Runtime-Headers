// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICRDNOTESECTIONIDENTIFIER_H
#define ICRDNOTESECTIONIDENTIFIER_H

@class NSString;
@protocol ICRDSectionIdentifier, NSCopying;

#import <Foundation/Foundation.h>


@interface ICRDNoteSectionIdentifier : NSObject <ICRDSectionIdentifier, NSCopying>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *expansionStateContext;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger sectionType; // ivar: _sectionType
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *title;


+(id)sortDescriptors;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToICRDNoteSectionIdentifier:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithNoteSectionType:(NSInteger)arg0 ;


@end


#endif