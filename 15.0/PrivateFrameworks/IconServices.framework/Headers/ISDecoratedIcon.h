// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ISDECORATEDICON_H
#define ISDECORATEDICON_H

@class NSArray;


#import "ISConcreteIcon.h"
#import "ISIcon.h"

@interface ISDecoratedIcon : ISConcreteIcon {
    NSArray *_decorations;
}


@property (readonly) NSArray *decorations;
@property (readonly) ISIcon *icon; // ivar: _icon


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)iconWithDecorations:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIcon:(id)arg0 decorations:(id)arg1 ;
-(id)makeResourceProvider;
-(id)symbol;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif