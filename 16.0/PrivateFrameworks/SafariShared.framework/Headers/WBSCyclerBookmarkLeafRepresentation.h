// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSCYCLERBOOKMARKLEAFREPRESENTATION_H
#define WBSCYCLERBOOKMARKLEAFREPRESENTATION_H

@class NSURL;


#import "WBSCyclerItemLeafRepresentation.h"

@interface WBSCyclerBookmarkLeafRepresentation : WBSCyclerItemLeafRepresentation

@property (retain, nonatomic, setter=setURL:) NSURL *url; // ivar: _url


+(BOOL)supportsSecureCoding;
-(BOOL)isEquivalent:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTitle:(id)arg0 uniqueIdentifier:(id)arg1 ;
-(id)initWithURL:(id)arg0 title:(id)arg1 uniqueIdentifier:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif