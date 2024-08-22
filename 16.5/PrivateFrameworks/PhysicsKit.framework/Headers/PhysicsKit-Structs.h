typedef struct CGPoint {
    CGFloat x;
    CGFloat y;
} CGPoint;

typedef struct CGSize {
    CGFloat width;
    CGFloat height;
} CGSize;

typedef struct CGVector {
    CGFloat dx;
    CGFloat dy;
} CGVector;

typedef struct _NSZone {
} // Error Processing Struct Fields

typedef struct b2Shape {
} // Error Processing Struct Fields

typedef struct b2FixtureDef {
    b2Shape field0;
    void field1;
    float field2;
    float field3;
    float field4;
    float field5;
    float field6;
} b2FixtureDef;

typedef struct b2Fixture {
} // Error Processing Struct Fields

typedef struct PKPhysicsShape {
    b2FixtureDef field0;
    b2Fixture field1;
} PKPhysicsShape;

typedef struct b2Vec2 {
    float x;
    float y;
} b2Vec2;

typedef struct b2BodyDef {
    BOOL _sk_affectedByGravity;
    unsigned int _sk_fieldCategoryBitMask;
    unsigned int _sk_categoryBitMask;
    unsigned int _sk_collisionBitMask;
    unsigned int _sk_intersectionCallbackBitMask;
    int type;
    b2Vec2 position;
    float angle;
    b2Vec2 linearVelocity;
    float angularVelocity;
    float charge;
    float linearDamping;
    float angularDamping;
    BOOL allowSleep;
    BOOL awake;
    BOOL fixedRotation;
    BOOL bullet;
    BOOL active;
    void userData;
} b2BodyDef;

typedef struct b2Rot {
    float field0;
    float field1;
} b2Rot;

typedef struct b2Transform {
    b2Vec2 field0;
    b2Rot field1;
} b2Transform;

typedef struct ? {
    b2Vec2 field0;
    float field1;
    float field2;
} ?;

typedef struct b2Sweep {
    b2Vec2 field0;
    BOOL field1;
    short field2;
    int field3;
    int field4;
    ? field5;
    BOOL field6;
    short field7;
    int field8;
    int field9;
    ? field10;
    float field11;
} b2Sweep;

typedef struct b2World {
} // Error Processing Struct Fields

typedef struct b2Body {
} // Error Processing Struct Fields

typedef struct PKPath {
} // Error Processing Struct Fields

typedef struct __shared_weak_count {
} // Error Processing Struct Fields

typedef struct shared_ptr<PKPath> {
    PKPath __ptr_;
    __shared_weak_count __cntrl_;
} shared_ptr<PKPath>;

typedef struct CGPath {
} // Error Processing Struct Fields

typedef struct QuadTree {
} // Error Processing Struct Fields

typedef struct shared_ptr<QuadTree> {
} // Error Processing Struct Fields

typedef struct CGRect {
    CGPoint field0;
    CGSize field1;
} CGRect;

typedef struct PKCField {
} // Error Processing Struct Fields

typedef struct vector<PKPhysicsShape *, std::allocator<PKPhysicsShape *>> {
} // Error Processing Struct Fields

typedef struct CGImage {
} // Error Processing Struct Fields

typedef struct b2Joint {
} // Error Processing Struct Fields

typedef struct b2JointDef {
} // Error Processing Struct Fields

typedef struct b2RevoluteJointDef {
} // Error Processing Struct Fields

typedef struct b2RevoluteJoint {
} // Error Processing Struct Fields

typedef struct b2DistanceJointDef {
} // Error Processing Struct Fields

typedef struct b2DistanceJoint {
} // Error Processing Struct Fields

typedef struct b2WeldJointDef {
} // Error Processing Struct Fields

typedef struct b2WeldJoint {
} // Error Processing Struct Fields

typedef struct b2PrismaticJointDef {
} // Error Processing Struct Fields

typedef struct b2PrismaticJoint {
} // Error Processing Struct Fields

typedef struct b2RopeJointDef {
} // Error Processing Struct Fields

typedef struct b2RopeJoint {
} // Error Processing Struct Fields

typedef struct shared_ptr<PKCField> {
} // Error Processing Struct Fields

typedef struct PKContactListener {
    unk _vptr$b2ContactListener;
    id _contacts;
    id NSMutableDictionary;
} PKContactListener;

typedef struct vector<PKPoint, std::allocator<PKPoint>> {
} // Error Processing Struct Fields

typedef struct vector<PKDebugDrawPacket::color4, std::allocator<PKDebugDrawPacket::color4>> {
} // Error Processing Struct Fields

typedef struct PKDebugDrawPacket {
    vector<PKPoint, std::allocator<PKPoint>> _linePoints;
    vector<PKDebugDrawPacket::color4, std::allocator<PKDebugDrawPacket::color4>> _colors;
} PKDebugDrawPacket;

typedef struct PKCGrid {
} // Error Processing Struct Fields

typedef struct shared_ptr<PKCGrid> {
} // Error Processing Struct Fields

typedef struct vec4 {
} // Error Processing Struct Fields

typedef struct PKCPathHolder {
} // Error Processing Struct Fields

typedef struct shared_ptr<PKCPathHolder> {
} // Error Processing Struct Fields

